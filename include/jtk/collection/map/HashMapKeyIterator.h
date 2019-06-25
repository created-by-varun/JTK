// Thursday, ‎July ‎12, ‎2018

#ifndef JTK_COLLECTION_HASH_MAP_KEY_ITERATOR_H
#define JTK_COLLECTION_HASH_MAP_KEY_ITERATOR_H

#include <jtk/Configuration.h>
#include <jtk/collection/map/HashMapEntryIterator.h>

/*******************************************************************************
 * HashMapKeyIterator                                                          *
 *******************************************************************************/

/**
 * @class HashMapKeyIterator
 * @ingroup jtk_collection_map
 * @author Samuel Rowe <samuelrowe1999@gmail.com>
 * @since  JTK 1.0
 */
struct jtk_HashMapKeyIterator_t {
    jtk_HashMapEntryIterator_t* m_entryIterator;
    jtk_Iterator_t* m_iterator;
};

/**
 * @memberof HashMapKeyIterator
 */
typedef struct jtk_HashMapKeyIterator_t jtk_HashMapKeyIterator_t;

/* Constructor */

/**
 * @memberof HashMapKeyIterator
 */
jtk_HashMapKeyIterator_t* jtk_HashMapKeyIterator_new(jtk_HashMap_t* map);

/* Destructor */

/**
 * @memberof HashMapKeyIterator
 */
void jtk_HashMapKeyIterator_delete(jtk_HashMapKeyIterator_t* iterator);

/* Destroy */

/**
 * @private
 * @memberof HashMapKeyIterator
 */
void jtk_HashMapKeyIterator_destroy(jtk_HashMapKeyIterator_t* iterator);

/* Iterator */

/**
 * @memberof HashMapKeyIterator
 */
jtk_Iterator_t* jtk_HashMapKeyIterator_getIterator(jtk_HashMapKeyIterator_t* iterator);

/* Next */

/**
 * @memberof HashMapKeyIterator
 */
bool jtk_HashMapKeyIterator_hasNext(jtk_HashMapKeyIterator_t* iterator);

/**
 * @memberof HashMapKeyIterator
 */
void* jtk_HashMapKeyIterator_getNext(jtk_HashMapKeyIterator_t* iterator);

#endif /* JTK_COLLECTION_HASH_MAP_KEY_ITERATOR_H */