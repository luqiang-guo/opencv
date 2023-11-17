g++ -g test.cpp -o test \
-I/mnt/home/glq/opencv/opencv-out/include/opencv4 \
-L/mnt/home/glq/opencv/opencv-out/lib \
-Wl,-rpath=/mnt/home/glq/opencv/opencv-out/lib \
-lopencv_core -lopencv_imgproc