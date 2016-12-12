/**
 * Copyright 2015-2016 DataStax, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "php_driver.h"
#include "php_driver_types.h"

zend_class_entry *cassandra_already_exists_exception_ce = NULL;

static zend_function_entry AlreadyExistsException_methods[] = {
  PHP_FE_END
};

void cassandra_define_AlreadyExistsException(TSRMLS_D)
{
  zend_class_entry ce;

  INIT_CLASS_ENTRY(ce, "Cassandra\\Exception\\AlreadyExistsException", AlreadyExistsException_methods);
  cassandra_already_exists_exception_ce = php5to7_zend_register_internal_class_ex(&ce, cassandra_configuration_exception_ce);
}
