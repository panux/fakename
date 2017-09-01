all: fakename.o

fakename.o:
	$(CC) $(CFLAGS) fakename.c -o fakename.o

install: all
	mkdir -p $(DESTDIR)/usr/bin
	install -m 0755 fakename.o $(DESTDIR)/usr/bin/uname
