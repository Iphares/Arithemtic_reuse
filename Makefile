CC = g++
CFLAGS = -std=c++17 -Wall

SRCDIR = src
OBJDIR = build
BINDIR = bin

SOURCES = $(wildcard $(SRCDIR)/*.cpp)
OBJECTS = $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SOURCES))
TARGET = $(BINDIR)/my_program

$(TARGET): $(OBJECTS)
	    $(CC) $(CFLAGS) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	    $(CC) $(CFLAGS) -c -o $@ $<

$(OBJDIR):
	    mkdir -p $(OBJDIR)

$(BINDIR):
	    mkdir -p $(BINDIR)

clean:
	    rm -rf $(OBJDIR) $(BINDIR)

.PHONY: clean
