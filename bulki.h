/**
 * Unit testing library
 * Copyright (C) 2022 Vahagn @ https://github.com/vhgn
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>
 *
 * @file bulki.h
 *
 * @author Vahagn @ https://github.com/vhgn
 * @date 2022-11-08
 */

#ifndef BULKI_HEADER
#define BULKI_HEADER

#include <stdio.h>
#include <stdlib.h>

#define bulki_error(A, F, L)                                                   \
  (printf("Returned %d in ./%s:%d\n", A, F, L), exit(EXIT_FAILURE), 0)

/**
 * Value should be zero
 */
#define bulki_zero(A) !A ? 0 : bulki_error(A, __FILE__, __LINE__)

/**
 * Value should be a non-zero
 */
#define bulki_non_zero(A) A ? 0 : bulki_error(A, __FILE__, __LINE__)

/**
 * Value should be positive
 */
#define bulki_positive(A) A > 0 ? 0 : bulki_error(A, __FILE__, __LINE__)

#endif /* BULKI_HEADER */
