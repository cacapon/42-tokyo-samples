
SRC_DIR		= src
OUT_DIR		= .
SRC_FILES	= $(wildcard $(SRC_DIR)/*.c)
OUT_FILES	= $(patsubst $(SRC_DIR)/%.c, $(OUT_DIR)/%.out, $(SRC_FILES))
DEL_FILE	= delfile.txt

all: $(OUT_FILES) $(SRC_DIR)/$(DEL_FILE)

$(OUT_DIR)/%.out: $(SRC_DIR)/%.c
	cc $< -o $@

$(SRC_DIR)/$(DEL_FILE):
	echo "this is delfile" > $@

clean:
	rm -rf *.out
	rm $(SRC_DIR)/$(DEL_FILE)