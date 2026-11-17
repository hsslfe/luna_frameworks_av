/*
 * Copyright 2024 The LibreMobileOS Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdint.h>

extern bool supportsTorchStrengthControlExt();
extern int32_t getTorchDefaultStrengthLevelExt();
extern int32_t getTorchMaxStrengthLevelExt();
extern int32_t getTorchStrengthLevelExt();
extern void setTorchStrengthLevelExt(int32_t torchStrength, bool enabled);

// Defaults preserve existing device extensions. New extensions can scope support
// to one camera and return a negative errno when a hardware operation fails.
extern bool supportsTorchStrengthControlForCameraExt(const char* cameraId);
extern int32_t setTorchStrengthLevelCheckedExt(int32_t torchStrength, bool enabled);
