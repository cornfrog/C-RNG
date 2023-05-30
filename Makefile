all:
	@gcc rng.c -o rng 
	@mv rng bin/
	@echo MAKE Success: use \'make run\' to run

run:
	@./bin/rng

clean:
	@rm bin/rng
	@echo MAKE CLEAN Success: use \'make\' to get program back
