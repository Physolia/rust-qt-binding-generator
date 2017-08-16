/* generated by rust_qt_binding_generator */
#![allow(unknown_lints)]
#![allow(mutex_atomic, needless_pass_by_value)]
#![allow(unused_imports)]
use libc::{c_int, c_uint, c_void};
use types::*;
use std::sync::{Arc, Mutex};
use std::ptr::null;

use fibonacci_implementation::*;

pub struct FibonacciQObject {}

#[derive (Clone)]
pub struct FibonacciEmitter {
    qobject: Arc<Mutex<*const FibonacciQObject>>,
    input_changed: fn(*const FibonacciQObject),
    result_changed: fn(*const FibonacciQObject),
}

unsafe impl Send for FibonacciEmitter {}

impl FibonacciEmitter {
    fn clear(&self) {
        *self.qobject.lock().unwrap() = null();
    }
    pub fn input_changed(&self) {
        let ptr = *self.qobject.lock().unwrap();
        if !ptr.is_null() {
            (self.input_changed)(ptr);
        }
    }
    pub fn result_changed(&self) {
        let ptr = *self.qobject.lock().unwrap();
        if !ptr.is_null() {
            (self.result_changed)(ptr);
        }
    }
}

pub trait FibonacciTrait {
    fn create(emit: FibonacciEmitter) -> Self;
    fn emit(&self) -> &FibonacciEmitter;
    fn get_input(&self) -> u32;
    fn set_input(&mut self, value: u32);
    fn get_result(&self) -> u64;
}

#[no_mangle]
pub extern "C" fn fibonacci_new(qobject: *const FibonacciQObject,
        input_changed: fn(*const FibonacciQObject),
        result_changed: fn(*const FibonacciQObject))
        -> *mut Fibonacci {
    let emit = FibonacciEmitter {
        qobject: Arc::new(Mutex::new(qobject)),
        input_changed: input_changed,
        result_changed: result_changed,
    };
    let d = Fibonacci::create(emit);
    Box::into_raw(Box::new(d))
}

#[no_mangle]
pub unsafe extern "C" fn fibonacci_free(ptr: *mut Fibonacci) {
    Box::from_raw(ptr).emit().clear();
}

#[no_mangle]
pub unsafe extern "C" fn fibonacci_input_get(ptr: *const Fibonacci) -> u32 {
    (&*ptr).get_input()
}

#[no_mangle]
pub unsafe extern "C" fn fibonacci_input_set(ptr: *mut Fibonacci, v: u32) {
    (&mut *ptr).set_input(v);
}

#[no_mangle]
pub unsafe extern "C" fn fibonacci_result_get(ptr: *const Fibonacci) -> u64 {
    (&*ptr).get_result()
}

pub struct FibonacciListQObject {}

#[derive (Clone)]
pub struct FibonacciListEmitter {
    qobject: Arc<Mutex<*const FibonacciListQObject>>,
    new_data_ready: fn(*const FibonacciListQObject),
}

unsafe impl Send for FibonacciListEmitter {}

impl FibonacciListEmitter {
    fn clear(&self) {
        *self.qobject.lock().unwrap() = null();
    }
    pub fn new_data_ready(&self) {
        let ptr = *self.qobject.lock().unwrap();
        if !ptr.is_null() {
            (self.new_data_ready)(ptr);
        }
    }
}

pub struct FibonacciListList {
    qobject: *const FibonacciListQObject,
    begin_reset_model: fn(*const FibonacciListQObject),
    end_reset_model: fn(*const FibonacciListQObject),
    begin_insert_rows: fn(*const FibonacciListQObject, c_int, c_int),
    end_insert_rows: fn(*const FibonacciListQObject),
    begin_remove_rows: fn(*const FibonacciListQObject, c_int, c_int),
    end_remove_rows: fn(*const FibonacciListQObject),
}

impl FibonacciListList {
    pub fn begin_reset_model(&self) {
        (self.begin_reset_model)(self.qobject);
    }
    pub fn end_reset_model(&self) {
        (self.end_reset_model)(self.qobject);
    }
    pub fn begin_insert_rows(&self, first: c_int, last: c_int) {
        (self.begin_insert_rows)(self.qobject, first, last);
    }
    pub fn end_insert_rows(&self) {
        (self.end_insert_rows)(self.qobject);
    }
    pub fn begin_remove_rows(&self, first: c_int, last: c_int) {
        (self.begin_remove_rows)(self.qobject, first, last);
    }
    pub fn end_remove_rows(&self) {
        (self.end_remove_rows)(self.qobject);
    }
}

pub trait FibonacciListTrait {
    fn create(emit: FibonacciListEmitter, model: FibonacciListList) -> Self;
    fn emit(&self) -> &FibonacciListEmitter;
    fn row_count(&self) -> c_int;
    fn can_fetch_more(&self) -> bool { false }
    fn fetch_more(&mut self) {}
    fn sort(&mut self, c_int, SortOrder) {}
    fn result(&self, row: c_int) -> u64;
}

#[no_mangle]
pub extern "C" fn fibonacci_list_new(qobject: *const FibonacciListQObject,
        new_data_ready: fn(*const FibonacciListQObject),
        begin_reset_model: fn(*const FibonacciListQObject),
        end_reset_model: fn(*const FibonacciListQObject),
        begin_insert_rows: fn(*const FibonacciListQObject,
            c_int,
            c_int),
        end_insert_rows: fn(*const FibonacciListQObject),
        begin_remove_rows: fn(*const FibonacciListQObject,
            c_int,
            c_int),
        end_remove_rows: fn(*const FibonacciListQObject))
        -> *mut FibonacciList {
    let emit = FibonacciListEmitter {
        qobject: Arc::new(Mutex::new(qobject)),
        new_data_ready: new_data_ready,
    };
    let model = FibonacciListList {
        qobject: qobject,
        begin_reset_model: begin_reset_model,
        end_reset_model: end_reset_model,
        begin_insert_rows: begin_insert_rows,
        end_insert_rows: end_insert_rows,
        begin_remove_rows: begin_remove_rows,
        end_remove_rows: end_remove_rows,
    };
    let d = FibonacciList::create(emit, model);
    Box::into_raw(Box::new(d))
}

#[no_mangle]
pub unsafe extern "C" fn fibonacci_list_free(ptr: *mut FibonacciList) {
    Box::from_raw(ptr).emit().clear();
}

#[no_mangle]
pub unsafe extern "C" fn fibonacci_list_row_count(ptr: *const FibonacciList) -> c_int {
    (&*ptr).row_count()
}
#[no_mangle]
pub unsafe extern "C" fn fibonacci_list_can_fetch_more(ptr: *const FibonacciList) -> bool {
    (&*ptr).can_fetch_more()
}
#[no_mangle]
pub unsafe extern "C" fn fibonacci_list_fetch_more(ptr: *mut FibonacciList) {
    (&mut *ptr).fetch_more()
}
#[no_mangle]
pub unsafe extern "C" fn fibonacci_list_sort(ptr: *mut FibonacciList, column: c_int, order: SortOrder) {
    (&mut *ptr).sort(column, order)
}

#[no_mangle]
pub unsafe extern "C" fn fibonacci_list_data_result(ptr: *const FibonacciList, row: c_int) -> u64 {
    (&*ptr).result(row)
}
