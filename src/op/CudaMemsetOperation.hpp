#ifndef UMPIRE_CudaMemsetOperation_HPP
#define UMPIRE_CudaMemsetOperation_HPP

#include "umpire/op/MemoryOperation.hpp"

namespace umpire {
namespace op {

/*!
 * \brief Memset on NVIDIA device memory.
 */
class CudaMemsetOperation : public MemoryOperation {
 public:
   /*!
    * @copybrief MemoryOperation::apply
    *
    * Uses cudaMemset to set first length bytes of src_ptr to value.
    *
    * @copydetails MemoryOperation::apply
    */
  void apply(
      void* src_ptr,
      util::AllocationRecord* ptr,
      int value,
      size_t length);
};

} // end of naemspace op
} //end of namespace umpire

#endif // UMPIRE_CudaMemsetOperation_HPP