TARGET ?= ./denise

SRC_DIR ?= ./src
BUILD_DIR ?= ./build

SRCS := $(shell find $(SRC_DIR) -name *.c)
OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)

$(TARGET): $(OBJS)
	gcc $(OBJS) -o $@

$(BUILD_DIR)/%.c.o: %.c
	mkdir -p $(dir $@)
	gcc -c $< -o $@

.PHONY: clean

clean:
	rm -r $(BUILD_DIR)
