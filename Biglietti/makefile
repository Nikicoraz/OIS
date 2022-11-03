COMPILER=g++
ARGS=-Wall -O2
DARGS=-Wall -g
MAINFILE=main.cpp
FILEEXT=exe

all: build run

build: $(MAINFILE)
	$(COMPILER) $(ARGS) $(MAINFILE) -o $(MAINFILE).$(FILEEXT)

debug: $(MAINFILE)
	$(COMPILER) $(DARGS) $(MAINFILE) -o $(MAINFILE).$(FILEEXT)

run: $(MAINFILE).$(FILEEXT)
	@ echo "Running $(MAINFILE).$(FILEEXT)"
	@ echo "---------- RUN -----------"
	@ ./$(MAINFILE).exe

clean:
	rm $(MAINFILE).$(FILEEXT)
