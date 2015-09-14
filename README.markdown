oftenr
======

This repo contains casual routines I used so often. There are many great
libraries doing us great favors, but sometimes some very often used are not
provided (though can be implemented in more than 10 lines).  I used to wrote
them again and again, and I started to get tired of this. So I decided to
write this repo.

# Requirements
* g++
* python-2.7
* libopencv-dev
* libboost-all-dev
* libgflags-dev
* libgoogle-glog-dev


# Compilation
In case you don't have softwares depended, run this script if you are using
Ubuntu (I suggest you ***have a look at it before*** you execute it).
```bash
sudo ./script/req-soft
```

Then, the last thing you need is:
```
make
```

By the way, if you want to link it easily with `loftenr`, you probably want to
export some environmental variables.
```bash
# LOCAL CONFIG

OFTENR=~'/workspace/oftenr';

if [ "$OFTENR" ] && [ -e "$OFTENR" ]; then
	CPATH="$CPATH:$OFTENR/include";
	export CPATH;

	LIBRARY_PATH="$LIBRARY_PATH:$OFTENR";
	export LIBRARY_PATH;

	LD_LIBRARY_PATH="$LD_LIBRARY_PATH:$OFTENR";
	export LD_LIBRARY_PATH;
fi
```
