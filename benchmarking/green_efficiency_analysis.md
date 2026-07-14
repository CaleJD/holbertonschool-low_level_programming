Measurement Methodology:
	I used the clock() functions to capture the before and after of a function. Then I subtracted the end time by the start time to get the exact run time of the total, build data, process and reduce functions. To convert those raw processor ticks into milliseconds, I divided the difference by CLOCKS_PER_SEC and multiplied by 1000. Then made printf lines to print out the resulting millisecond duration of each function.

Observed Performance Differences:
	After running the tests, there was a really clear difference in how much time each phase took. The build_data function took the longest. The computational process loop finished much quicker, and the final reduce step was incredibly fast, taking up only a tiny sliver of the total execution time.

Relation Between Runtime and Energy Cosumption:
	Even though we didn't hook up a physical hardware power meter to the wall, runtime is a great stand-in for measuring energy and carbon impact. At its core, hardware energy consumption boils down to a simple formula: ENERGY = POWER x TIME. When code takes longer to run, the CPU has to stay in an active, high-power state for longer. Inefficient code keeps thousands of tiny transistors on the chip switching back and forth, which burns electricity and generates heat. By optimizing our algorithms to run faster, we directly cut down the total kilowatt-hours a server needs to pull from the wall.

Limitations of the Experiment:
	While these numbers are helpful, this experiment has some clear limitations. First, clock() measures CPU time rather than actual "wall-clock" time. It's great for tracking code execution, but it doesn't show us external bottlenecks like waiting on slow memory buses or storage. On top of that, running benchmarks on a standard, shared operating system introduces noise. Things like background OS tasks, thread scheduling, and even the CPU throttling itself when it gets warm can cause timing jitter. Because of these moving parts, you will almost never get the exact same millisecond readout twice in a row.

Practical Engineering Takeaway:
	As software engineers, our job isn't done just because a program outputs the correct result. We have to think about the digital footprint we're leaving behind. Writing lightweight, efficient code is a core engineering duty. Adding quick runtime checks to our local workflows—and eventually into automated CI/CD pipelines—helps us catch performance bottlenecks before they ship. In the end, writing optimized code is a win-win: it lowers cloud hosting bills and reduces the environmental impact of our tech stacks.
