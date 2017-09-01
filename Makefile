all: fakename.o

fakename.o:
	gcc fakename.c -o fakename.o

install: all
	mkdir -p $(DESTDIR)/usr/bin
	install -m 0755 fakename.o $(DESTDIR)/usr/bin/uname
