#make for leetcode
CC=gcc
CFLAGES = -w -g -Wall -O2 -std=gnu99

TARGET = leetcode
DIRS = . \

FILES = $(foreach dir, $(DIRS),$(wildcard $(dir)/*.c))
OBJS = $(patsubst %.c,%.o,$(FILES))


$(TARGET):$(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(CFLAGES) $(LIBS)

$(OBJS):%.o:%.c         
	@$(CC) $(INCS) -c  $< $(CFLAGES) -o $@

clean:
	-rm -f $(TARGET) $(OBJS)
