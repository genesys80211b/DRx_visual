MATLAB="/usr/local/MATLAB/R2015b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/ram/.matlab/R2015b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for rffe_75" > rffe_75_mex.mki
echo "CC=$CC" >> rffe_75_mex.mki
echo "CFLAGS=$CFLAGS" >> rffe_75_mex.mki
echo "CLIBS=$CLIBS" >> rffe_75_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> rffe_75_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> rffe_75_mex.mki
echo "CXX=$CXX" >> rffe_75_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> rffe_75_mex.mki
echo "CXXLIBS=$CXXLIBS" >> rffe_75_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> rffe_75_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> rffe_75_mex.mki
echo "LD=$LD" >> rffe_75_mex.mki
echo "LDFLAGS=$LDFLAGS" >> rffe_75_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> rffe_75_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> rffe_75_mex.mki
echo "Arch=$Arch" >> rffe_75_mex.mki
echo OMPFLAGS=-fopenmp -DOMPLIBNAME='"\"/usr/local/MATLAB/R2015b/sys/os/glnxa64/libiomp5.so\""' >> rffe_75_mex.mki
echo OMPLINKFLAGS=-fPIC -L/usr/local/MATLAB/R2015b/sys/os/glnxa64 -liomp5 >> rffe_75_mex.mki
echo "EMC_COMPILER=gcc" >> rffe_75_mex.mki
echo "EMC_CONFIG=optim" >> rffe_75_mex.mki
"/usr/local/MATLAB/R2015b/bin/glnxa64/gmake" -B -f rffe_75_mex.mk
