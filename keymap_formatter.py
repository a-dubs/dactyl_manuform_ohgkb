
raw_keycodes_str = str(input("enter your raw keymap list:\n")).rstrip()[:-1]
print("|"+raw_keycodes_str+"|")
output = "LAYOUT(\n" 

cell_width = 4 * 3

row_formats = [
    {
        "offset":2, 
        "length":4,
    },
    {
        "offset":0, 
        "length":6,
    },
    {
        "offset":0, 
        "length":6,
    },
    {
        "offset":0, 
        "length":6,
    },
    {
        "offset":0, 
        "length":4,
    },
    {
        "offset":2, 
        "length":4,
    },
    {
        "offset":4, 
        "length":2,
    },
]

num_keys = sum([rf["length"] for rf in row_formats])
print("configured for", num_keys, "keys")   

keycode_list = raw_keycodes_str.split(", ")
print("given", len(keycode_list), "keycodes")

row_strs = [" "*(cell_width*(rf["offset"]+1)) for rf in row_formats]
row_left = 0
row_i = -1
for kc_i in range(num_keys):
    if row_left == 0:
        row_i += 1
        row_left = row_formats[row_i]["length"]
    row_strs[row_i] += (keycode_list[kc_i]+("" if kc_i == num_keys-1 else ",")).ljust(cell_width)
    row_left -= 1
output += "\n".join(row_strs)
output += "\n    )\n"
print(output)