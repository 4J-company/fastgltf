#pragma once

#include <fastgltf/tools.hpp>

// If we find mr-math in the default include path, we'll also include it ourselfs.
// However, it is generally expected that the user will include mr-math before including this header.
#if __has_include(<mr-math/math.hpp>)
#include <mr-math/math.hpp>
#endif

namespace fastgltf {
template<>
struct ElementTraits<mr::Vec2f> : ElementTraitsBase<mr::Vec2f, AccessorType::Vec2, float> {};

template<>
struct ElementTraits<mr::Vec3f> : ElementTraitsBase<mr::Vec3f, AccessorType::Vec3, float> {};

template<>
struct ElementTraits<mr::Vec4f> : ElementTraitsBase<mr::Vec4f, AccessorType::Vec4, float> {};

template<>
struct ElementTraits<mr::Vec2u> : ElementTraitsBase<mr::Vec2u, AccessorType::Vec2, std::uint32_t> {};

template<>
struct ElementTraits<mr::Vec3u> : ElementTraitsBase<mr::Vec3u, AccessorType::Vec3, std::uint32_t> {};

template<>
struct ElementTraits<mr::Vec4u> : ElementTraitsBase<mr::Vec4u, AccessorType::Vec4, std::uint32_t> {};

template<>
struct ElementTraits<mr::Matr2f> : ElementTraitsBase<mr::Matr2f, AccessorType::Mat2, float> {};

template<>
struct ElementTraits<mr::Matr3f> : ElementTraitsBase<mr::Matr3f, AccessorType::Mat3, float> {};

template<>
struct ElementTraits<mr::Matr4f> : ElementTraitsBase<mr::Matr4f, AccessorType::Mat4, float> {};

} // namespace fastgltf
