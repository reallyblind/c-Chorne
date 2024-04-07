#include<iostream>
#include<thread>

static bool s_Finished = false;

void DoWork()
{
	using namespace std::literals::chrono_literals;

	std::cout << "Started thread_id = " << std::this_thread::get_id() << std::endl;

	while (!s_Finished) 
	{
		std::cout << "Working..." << std::endl;
		std::this_thread::sleep_for(1s);
	}
}

int main()
{
	std::thread worker(DoWork);

	std::cin.get();
	s_Finished = true;

	worker.join();//this join function is essentially going to wait for this thread to be join now. Thread joining is another kind of potentially complex topic that might be worth discussing in more detail. All this does is just wait on the current thread for this thread to finish its work. Because this stuff is running parallel,we have our main thread which starts off a worker thread. What we're doing by writing this join kind of code here is we're saying on the main thread wait for the worker thread to finish all of its excution before we continue on with whatever our main thread has.
	std::cout << "Finished" << std::endl;
	std::cout << "Started thread_id = " << std::this_thread::get_id() << std::endl;
	std::cin.get();
}
