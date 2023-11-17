#include <iostream>
#include <vector>
#include <opencv2/opencv.hpp>
using std::vector;

int main(void) {


  uint32_t channel = 1;
  // (11, 1, 1, 21, 13);
// 7, 4, 3, 5, 3
  uint32_t src_w = 11;
  uint32_t src_h = 3;
  uint32_t dst_w = 21;
  uint32_t dst_h = 13;

  size_t src_num = src_w * src_h * channel;
  size_t num = dst_w * dst_h * channel;

  vector<uint8_t> u8_src_buf(src_w * src_h * channel, 0);
  // vector<float> f32_src_buf(src_w * src_h * channel, 0);
  for(auto i = 0u; i < src_num; i++) {
    u8_src_buf[i] = i % 255;
    // f32_src_buf[i] = (64 + i) %256;
  }

  vector<uint8_t> u8_out(num, 0);
  // vector<float> f32_out(num, 0);

  cv::Mat u8_src_frame(src_h, src_w, CV_8UC1, u8_src_buf.data());
  // cv::Mat f32_src_frame(src_h, src_w, CV_32FC1, f32_src_buf.data());
 
  cv::Mat u8_dst_frame(dst_h, dst_w, CV_8UC3, u8_out.data());
  // cv::Mat f32_dst_frame(dst_h, dst_w, CV_32FC1, f32_out.data());
  
  //INTER_LINEAR
  cv::resize(u8_src_frame, u8_dst_frame, cv::Size(dst_w, dst_h), 0, 0, cv::INTER_LINEAR);
  // cv::resize(f32_src_frame, f32_dst_frame, cv::Size(dst_w, dst_h), 0, 0, cv::INTER_LINEAR);

  for(int i = 0; i < dst_w * dst_h; i++)
  {
    printf("i = %d : %d, %d, %d \n", i, u8_out[3*i], u8_out[3*i + 1], u8_out[3*i + 2]);
  }

  // for(auto h = 0u; h < dst_h; h++){
  //   for(auto w = 0u; w < dst_w; w++) {
  //     for(auto c = 0u; c < channel; c++) {
  //       uint8_t bnf = u8_out[h*dst_w*channel + w*channel +c];
  //       printf("hwc = (%d, %d, %d). %d\n", h, w, c, bnf);
  //     }
  //   }
  // }

//   // clang-format off
//   // clang-format on
}