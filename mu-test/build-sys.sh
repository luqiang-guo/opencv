g++ -g test.cpp -o sys-test \
-I/usr/local/include/opencv4 \
-L/usr/local/lib \
-Wl,-rpath=/usr/local/lib \
-lopencv_core -lopencv_imgproc