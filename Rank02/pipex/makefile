
SRC_DIR		= src
OUT_DIR		= .
SRC_FILES	= $(wildcard $(SRC_DIR)/*.c)
OUT_FILES	= $(patsubst $(SRC_DIR)/%.c, $(OUT_DIR)/%.out, $(SRC_FILES))

all: $(OUT_FILES)

$(OUT_DIR)/%.out: $(SRC_DIR)/%.c
	cc $< -o $@


clean:
	rm -rf *.out