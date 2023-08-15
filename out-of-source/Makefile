# -*- mode: makefile-gmake -*-

override TARGET := a.out
override BUILD_DIR := build
override SRC_DIR := src

override OBJECTS := $(patsubst %, $(BUILD_DIR)/%.o, $(notdir $(wildcard $(SRC_DIR)/*.c)))

CFLAGS += -MMD -MP

# Link it all together
$(BUILD_DIR)/$(TARGET): $(BUILD_DIR) $(OBJECTS)
	$(CC) $(OBJECTS) -o $@ $(LDFLAGS)

# Make sure we have the build directory
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Compile C sources
$(BUILD_DIR)/%.c.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -rf $(BUILD_DIR)

-include $(OBJECTS:.o=.d)
