# mbp - modules build path
mbuildp = /lib/modules/6.1.0-28-amd64/build

# module development path
mdevp = $(PWD)

# We need to set obj-m which is a special kbuild variable to the name of 
# the obect file. gcc is going to produce an object file by the same name
# as the source file which is km_hw_01.c so gcc will output km_hw_01.o
obj-m = km_hw_01.o

all:
	make -C $(mbuildp) M=$(mdevp) modules

clean:
	make -C $(mbuildp) M=$(mdevp) modules clean
