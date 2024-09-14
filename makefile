run:
	find src/ -name '*.cpp' -exec g++ -std=c++2b -O2 -Wall {} + && ./a.out

compile:
	find src/ -name '*.cpp' -exec g++ -std=c++2b {} +
