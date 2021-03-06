/*
 * Copyright 2018-2019 OneCube
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Saturday, November 04, 2017

#ifndef JTK_CORE_STRING_BUILDER_H
#define JTK_CORE_STRING_BUILDER_H

#include <jtk/Configuration.h>
#include <jtk/core/String.h>

/*******************************************************************************
 * StringBuilder                                                               *
 *******************************************************************************/

#define JTK_STRING_BUILDER_DEFAULT_CAPACITY 16

/**
 * @author Samuel Rowe
 * @since JTK 1.1
 * @ingroup jtk_core
 */
struct jtk_StringBuilder_t {
    uint8_t* m_value;
    int32_t m_capacity;
    int32_t m_size;
};

typedef struct jtk_StringBuilder_t jtk_StringBuilder_t;

// Constructor

jtk_StringBuilder_t* jtk_StringBuilder_new();
jtk_StringBuilder_t* jtk_StringBuilder_newWithCapacity(int32_t capacity);
jtk_StringBuilder_t* jtk_StringBuilder_newWithSequence(const uint8_t* content);
jtk_StringBuilder_t* jtk_StringBuilder_newWithSequenceEx(const uint8_t* content, int32_t size);

// Destructor

void jtk_StringBuilder_delete(jtk_StringBuilder_t* builder);

// Append

void jtk_StringBuilder_appendCodePoint(jtk_StringBuilder_t* builder, int32_t codePoint);
jtk_String_t* jtk_StringBuilder_toString(jtk_StringBuilder_t* builder);
int32_t jtk_StringBuilder_getSize(jtk_StringBuilder_t* builder);
void jtk_StringBuilder_clear(jtk_StringBuilder_t* builder);
void jtk_StringBuilder_trim(jtk_StringBuilder_t* builder);

// Capacity

bool jtk_StringBuilder_ensureSpace(jtk_StringBuilder_t* builder, int32_t capacity);
int32_t jtk_StringBuilder_getCapacity(jtk_StringBuilder_t* builder);

#endif /* JTK_CORE_STRING_BUILDER_H */