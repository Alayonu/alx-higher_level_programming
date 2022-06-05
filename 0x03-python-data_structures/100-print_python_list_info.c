#include <stdio.h>
#include <Python.h>

/**
 * print_python_list_info - Prints basic info about Python lists.
 * @p: A PyObject list.
 * Return: no return
 */
void print_python_list_info(PyObject *p)
{
	long int size, i;
	PyListObject *list;
	PyObject *item;

	size = Py_SIZE(p);
	print("[*] Size of the Python List = %ld\n", size);

	list = (PyListObject *)p;
	printf("[*] Allocated = %ld\n", list->allocated);

	for (i = 0; i < size; i++)
	{
		item = PyList_GetItem(p, i);
		printf("Element %ld: %s\n", i, Py_TYPE(item)->tp_name);
	}
}
