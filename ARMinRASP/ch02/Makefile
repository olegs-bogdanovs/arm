all: sum01 sum02
	 
sum01: sum01.o
	gcc -o $@ $+
		 
sum01.o : sum01.s
	as -o $@ $<

sum02: sum02.o
	gcc -o $@ $+
		 
sum02.o : sum02.s
	as -o $@ $<

clean:
	rm -vf sum01 *.o
