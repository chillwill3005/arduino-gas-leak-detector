# Arduino Gas Leak Detection System
An embedded system using an MQ-5 sensor and Arduino to detect LPG, methane, hydrogen, and natural gas, triggering visual and audio alerts for safety monitoring.

## Demo

▶️ Full system demonstration; Portable Gas Leak Detection System (Arduino): https://youtu.be/uWade8Qd0Jg?si=SRWCj3aXiakNgnTq

The video shows the system's baseline state, then controlled gas exposure via a lighter that causes LED activation and buzzer alert behavior.

## Inputs and Outputs

### Inputs
- MQ-5 gas sensor (digital threshold output indicating gas presence)
- Power input (USB or 9V battery)

### Outputs
- LED indicator (visual alert when gas is detected)
- Buzzer (audible alert when gas exceeds threshold)
- Serial monitor output (real-time sensor readings used for debugging, calibration, and verification)

## Design Notes
- The MQ-5 sensor’s onboard comparator was used to provide a digital threshold signal, simplifying detection logic.
- Threshold sensitivity was tuned to balance responsiveness and false positives.
- System behavior was verified using both physical outputs and serial monitor readings.
