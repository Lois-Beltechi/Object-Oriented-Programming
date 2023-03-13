//
// Created by loisb on 13.04.2022.
//

#ifndef A5_6_911_BELTECHI_LOIS_TESTS_H
#define A5_6_911_BELTECHI_LOIS_TESTS_H


#pragma once
#include "Domain/Date.h"
#include "Domain/Time.h"
#include "Domain/Event.h"
#include "DynamicVector/DynamicVector.h"
#include "Repo/Repository.h"
#include "Service/Service.h"
#include <assert.h>

class Test{
public:
    static void testAll();
    static void test_Event_Date_Time();
    static void test_Dynamic_Vector();
    static void test_Repository();
    static void test_Service();

};


#endif //A5_6_911_BELTECHI_LOIS_TESTS_H
