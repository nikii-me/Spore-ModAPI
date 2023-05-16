#pragma once

#include <Spore\Internal.h>

namespace Simulator
{
	/// Identifies objects within a cObjectPool.
	typedef int cObjectPoolIndex;

	/// Base class for all objects that are used inside a cObjectPool.
	struct cObjectPoolClass
	{
		// Index of this objetc within the pool; for deleted objects, this is the index to the next available space.
		cObjectPoolIndex mObjectPoolIndex;
	};

	/// Stores a pool of objects whose memory can be reused efficiently, without need for heap allocations.
	/// Objects within the pool are identifier with a cObjectPoolIndex. 
	/// All objects must be subclasses of cObjectPoolClass
	/// 
	/// Iteration example:
	/// ```cpp
	/// cObjectPool pool;
	/// // ...
	/// cObjectPool::Iterator it;
	/// cObjectPoolClass* object;
	/// while ((object = pool.Iterate(it)) != nullptr) {
	///		
	/// }
	/// ```
	class cObjectPool
	{
	public:
		struct Iterator
		{
			int index;
		};

		cObjectPool();
		~cObjectPool();

		void Initialize(int objectSize, int numObjects);

		/// Removes all objects.
		void Clear();

		/// Returns the object at the given index. This will return even if the index is not valid or the object is not alive.
		/// @param index
		cObjectPoolClass* Get(cObjectPoolIndex index);

		/// Returns the object at the given index, only if it has not been deleted.
		/// @param index
		/// @returns The object, or nullptr if the object was deleted.
		cObjectPoolClass* GetIfNotDeleted(cObjectPoolIndex index);

		/// Creates a new object in the pool, with all memory set to 0 except for the identifying index.
		/// @returns The index used to access the new object.
		cObjectPoolIndex CreateObject();

		void DeleteObject(cObjectPoolIndex index);

		/// Advances the iterator and returns the next object, or nullptr if the iterator reached the end.
		/// @param it
		/// @eturns
		cObjectPoolClass* Iterate(Iterator& it) const;

	public:
		/* 00h */	void* mpData;
		/* 04h */	int mNextAvailableIndex;  // -1
		/* 08h */	int mObjectPoolIndentifier;
		/* 0Ch */	int mNumObjects;
		/* 10h */	int mNumAllocatedObjects;
		/* 14h */	int mObjectSize;
		/* 18h */	int field_18;
	};
	ASSERT_SIZE(cObjectPool, 0x1C);

	namespace Addresses(cObjectPool)
	{
		DeclareAddress(Initialize);  // 0xB71A10 0xB72190
		DeclareAddress(_dtor);  // 0xB71A70 0xB721F0
		DeclareAddress(Get);  // 0x0B71BA0 0xB72320
		DeclareAddress(Clear);  // 0xB71AA0 0xB72220
		DeclareAddress(CreateObject);  // 0xB71AF0 0xB72270
		DeclareAddress(GetIfNotDeleted);  // 0xB71B60 0xB722E0
		DeclareAddress(DeleteObject);  // 0xB71BF0 0xB72370
		DeclareAddress(Iterate);  // 0xB71BC0 0xB72340
	}
}