//change this file into a cpp file 
import java.util.Map;
import java.util.Set;
import java.util.Collection;
import java.util.LinkedHashSet;
import java.util.ArrayList;
public final class MyMap<K,V> implements Map<K,V> {
    public Set<Entry<K,V>> entries = new LinkedHashSet<Entry<K,V>>();
    int size;
	//Returns the number of key-value mappings in this map.
    public int size() {
	return this.size;
    }
	//Returns a Set view of the mappings contained in this map.
    public Set<Entry<K, V>> entrySet() {
	return entries;
    }
	//Returns a Set view of the keys contained in this map.
    public Set<K> keySet() {
	Set<K> keys = new LinkedHashSet<>();
	for(Entry<K,V> entry: entries) {
	    keys.add(entry.getKey());
	}
	return keys;
    }
	//Removes all of the mappings from this map (optional operation).
    public void clear() {

    }
	//Returns a Collection view of the values contained in this map.
    public Collection<V> values() {
	Collection<V> vals = new ArrayList<V>();
	for(Entry<K,V> entry : entries) {
	    vals.add(entry.getValue());
	}
	return vals;
    }
	//Copies all of the mappings from the specified map to this map (optional operation).
    public void putAll(final Map<? extends K, ? extends V> map) {

    }
	//Removes the mapping for a key from this map if it is present (optional operation).
    public V remove(final Object key) {
	return null;
    }
	//Associates the specified value with the specified key in this map (optional operation).
    public V put(final K key, final V value) {
	//returns old value after insertion
	return null;
    }
	//Returns the value to which the specified key is mapped, or null if this map contains no mapping for the key.
    public V get(final Object key) {
	return null;
    }
	//Returns true if this map maps one or more keys to the specified value.
    public boolean containsValue(Object value) {
	return false;
    }
	//Returns true if this map contains a mapping for the specified key.
    public boolean containsKey(Object key) {
	return false;
    }
	//Returns true if this map contains no key-value mappings.
    public boolean isEmpty() {
	return false;
    }


}
