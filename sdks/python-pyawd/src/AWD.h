#ifndef _PYAWD_AWD_H
#define _PYAWD_AWD_H

#include <Python.h>

#include <awd/libawd.h>


extern PyTypeObject pyawd_AWDType;


typedef struct {
    PyObject_HEAD

    AWD         *ob_awd;
    int         ob_has_written_header;
} pyawd_AWD;


void pyawd_AWD_dealloc(pyawd_AWD *);
PyObject *pyawd_AWD_new(PyTypeObject *, PyObject *, PyObject *);

int pyawd_AWD_init(pyawd_AWD *, PyObject *, PyObject *);


PyObject *pyawd_AWD_add_mesh_data(pyawd_AWD *, PyObject *);




#endif
