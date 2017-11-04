#which compiler
CC = gcc

#where to find header files
INCLUDE = .

#development options
CFLAGS = -g -Wall -ansi

#release options
#CFLAGS = -O -Wall -ansi

#install directory
INSTDIR = ./install

myapp: 2.o main.o 3.o
	@echo $@
	@echo $<
	gcc -o myapp main.o 2.o 3.o

#this is how to comment
#prerequisites include header file
#but compile commond needn't include ,expect you specify certain header file path with -I
main.o: main.c a.h
	$(CC) -I$(INCLUDE) $(CFLAGS) -c main.c

2.o: 2.c a.h b.h
	$(CC) -I$(INCLUDE) $(CFLAGS) -c 2.c

3.o: 3.c b.h c.h
	$(CC) -I$(INCLUDE) $(CFLAGS) -c 3.c

# -rm the - before commond rm means ignore all errors rm may produce.
clean:
	-rm main.o 2.o 3.o

#@if ... else  the @ before if tell make don't output this commond to stdin
install: myapp
	@if [ -d $(INSTDIR) ]; \
	  then \
	  cp myapp $(INSTDIR);\
	  chmod a+x $(INSTDIR)/myapp; \
	  chmod og-w $(INSTDIR)/myapp; \
	  echo "Installed in $(INSTDIR)";\
	 else \
	   echo "Sorry ,$(INSTDIR) does not exist";\
	 fi
