cmake ../ -DCMAKE_BUILD_TYPE=Debug -DCMAKE_INSTALL_PREFIX=../opencv-out -DBUILD_opencv_python2=off -DBUILD_opencv_python3=off -DWITH_OPENCL=off -DWITH_PTHREADS_PF=off
 
cmake .. -DCMAKE_INSTALL_PREFIX=../opencv-out -DENABLE_PROFILING=ON -DCMAKE_INSTALL_PREFIX=../opencv-out -DBUILD_opencv_python2=off -DBUILD_opencv_python3=off -DWITH_PTHREADS_PF=off -DCMAKE_BUILD_TYPE=Debug