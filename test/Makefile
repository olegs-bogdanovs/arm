all: dump
	 		 
first.o : first.c
	arm-linux-gnueabihf-gcc -O2 -fomit-frame-pointer -c -o $@ $<
	 
dump: test.o
	arm-linux-gnueabihf-objdump -d $< > test.txt

clean:
	rm test.o test.txt
