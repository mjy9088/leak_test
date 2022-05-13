/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leak_test.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaing <jmaing@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 14:57:45 by jmaing            #+#    #+#             */
/*   Updated: 2022/05/14 01:47:08 by jmaing           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEAK_TEST_H
# define LEAK_TEST_H

# include <stdbool.h>

typedef bool	(*t_leak_test)(void *context);

int		leak_test(t_leak_test target, void *context);
void	leak_test_start(void);
void	leak_test_end(void);

# define MALLOC_TEST_RESULT_OK 0
# define MALLOC_TEST_RESULT_ERROR -1
# define MALLOC_TEST_RESULT_LEAK 1

#endif
