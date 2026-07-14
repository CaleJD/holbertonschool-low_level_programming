Measurement Methodology:
	I used the clock() functions to capture the before and after of a function.
	Then I subtracted the end time by the start time to get the exact run time of the total, build data, process and reduce functions.
	Then made printf lines to print out the resulting millisecond duration of each function.

Observed Performance Differences:
	The build data took longer to complete than the process did and the reduce was the shortest task.

Relation Between Runtime and Energy Cosumption:
	The energy consumption is a direct result of the runtime! The longer something runs and the more power the funciton demands the more energy it uses.

Limitations of the Experiment:
	The experiment was extremely lightweight and will always get different results depending on many variables such as the machine it ran on, the background processes of the machine and even the temperature.

Practical Engineering Takeaway:
	As a software engineer you must always look to make your products run as lightweight as possible and having tests to check the runtime will inform the dev on how long a process is taking.	
