#compile all c files into object files
gcc -c *.c
# ar stands for archive is a command-line utility 
# -r tells ar to replace existing object files in the archive with newer version
# -c tells ar to create the archive if does not exist
# -s basically just add index to help linker quickly locate and access .o files
ar -rcs libft.a *.o
# remove all object files
rm -rf *.o

#Step 1: ar creates or updates libft.a.
#Step 2: All object files (file1.o, file2.o, file3.o, etc.) are added to libft.a.
#Step 3: An index is created for libft.a to improve linking performance.