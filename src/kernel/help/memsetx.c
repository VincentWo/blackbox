#include <help/memory.h>
#include <stddef.h>
#include <stdint.h>

void* memset16(void* ptr, uint16_t val, size_t size)
{
  for(size_t i = 0; i < size; ++i)
    ((uint16_t*)ptr)[i]=val;
  return ptr;
}

void* memset32(void* ptr, uint32_t val, size_t size)
{
  for(size_t i = 0; i < size; ++i)
    ((uint16_t*)ptr)[i]=val;
  return ptr;
}

void* memset64(void* ptr, uint64_t val, size_t size)
{
  for(size_t i = 0; i < size; ++i)
    ((uint16_t*)ptr)[i]=val;
  return ptr;
}
