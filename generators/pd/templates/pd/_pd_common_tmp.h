/* Copyright 2013-present Barefoot Networks, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * Antonin Bas (antonin@barefootnetworks.com)
 *
 */

#ifndef _P4_PD_COMMON_H_
#define _P4_PD_COMMON_H_

// TODO(antonin): this whole header is temporary, need to find an alternative

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdbool.h>

typedef uint32_t p4_pd_status_t;

typedef uint32_t p4_pd_sess_hdl_t;

typedef uint64_t p4_pd_entry_hdl_t;
typedef uint32_t p4_pd_mbr_hdl_t;
typedef uint32_t p4_pd_grp_hdl_t;

#define PD_DEV_PIPE_ALL 0xffff
typedef struct p4_pd_dev_target {
  int device_id; /*!< Device Identifier the API request is for */
  uint16_t dev_pipe_id;/*!< If specified localizes target to the resources
			 * only accessible to the port. DEV_PORT_ALL serves
			 * as a wild-card value
			 */
} p4_pd_dev_target_t;

#ifdef __cplusplus
}
#endif

#endif
