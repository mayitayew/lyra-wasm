#ifndef LYRA_CODEC_ENCODE_AND_DECODE_LIB_H_
#define LYRA_CODEC_ENCODE_AND_DECODE_LIB_H_

#include "lyra_decoder.h"
#include "lyra_encoder.h"

namespace chromemedia {
namespace codec {

std::optional<std::vector<int16_t>> EncodeAndDecode(
    LyraEncoder* encoder, LyraDecoder* decoder,
    const std::vector<int16_t>& wav_data, int sample_rate_hz, int bitrate,
    float packet_loss_rate, float average_burst_length);

bool End2End(const std::string& input_filename,
             const std::string& output_filename, const std::string& arg0);

}  // namespace codec
}  // namespace chromemedia

#endif  // LYRA_CODEC_ENCODE_AND_DECODE_LIB_H_