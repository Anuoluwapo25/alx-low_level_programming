PROGRAM = 101-hello_holberton
ASFLAGS = -f elf64
LDFLAGS = -no-pie -std=gnu89 -e global_start

$(PROGRAM): $(PROGRAM).o
	gcc $(LDFLAGS) -o $@ $<

$(PROGRAM).o: $(PROGRAM).asm
	nasm $(ASFLAGS) -o $@ $<

clean:
	rm -f $(PROGRAM) $(PROGRAM).o

