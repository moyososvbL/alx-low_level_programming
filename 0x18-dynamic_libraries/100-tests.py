# Access your C code
from ctypes import *
so_file = "./100-operations.so"
100-operations = CDLL(so_file)

# Use your C code
100-atoi._atoi(char *s)
