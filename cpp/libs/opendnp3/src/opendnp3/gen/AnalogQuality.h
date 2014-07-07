//
//  _   _         ______    _ _ _   _             _ _ _
// | \ | |       |  ____|  | (_) | (_)           | | | |
// |  \| | ___   | |__   __| |_| |_ _ _ __   __ _| | | |
// | . ` |/ _ \  |  __| / _` | | __| | '_ \ / _` | | | |
// | |\  | (_) | | |___| (_| | | |_| | | | | (_| |_|_|_|
// |_| \_|\___/  |______\__,_|_|\__|_|_| |_|\__, (_|_|_)
//                                           __/ |
//                                          |___/
// Copyright 2013 Automatak LLC
// 
// Automatak LLC (www.automatak.com) licenses this file
// to you under the the Apache License Version 2.0 (the "License"):
// 
// http://www.apache.org/licenses/LICENSE-2.0.html
//

#ifndef __OPENDNP3_GENERATED_ANALOGQUALITY_H_
#define __OPENDNP3_GENERATED_ANALOGQUALITY_H_

#include <cstdint>

namespace opendnp3 {

/**
  Quality field bitmask for analog values.
*/
enum class AnalogQuality : uint8_t
{
  /// set when the data is "good", meaning that rest of the system can trust the value
  ONLINE = 0x1,
  /// the quality all points get before we have established communication (or populated) the point
  RESTART = 0x2,
  /// set if communication has been lost with the source of the data (after establishing contact)
  COMM_LOST = 0x4,
  /// set if the value is being forced to a "fake" value somewhere in the system
  REMOTE_FORCED_DATA = 0x8,
  /// set if the value is being forced to a "fake" value on the original device
  LOCAL_FORCED_DATA = 0x10,
  /// set if a hardware input etc. is out of range and we are using a place holder value
  OVERRANGE = 0x20,
  /// set if calibration or reference voltage has been lost meaning readings are questionable
  REFERENCE_ERR = 0x40,
  /// reserved bit
  RESERVED = 0x80
};


}

#endif
