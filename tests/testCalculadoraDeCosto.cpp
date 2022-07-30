#include <gtest/gtest.h>
#include "/home/alessandro/examen1/Pregunta3/src/calculadoraDeCosto.h"

namespace
{
    TEST(testCalculadoraDeCosto, TestPesoMenorA_3_Articulo1)
    {
        /// AAA

        // Arrange - configurar el escenario
        CalculadoraDeCosto *caso1 = new CalculadoraDeCosto;

        // Act - ejecute la operación
        float actual = caso1->CalcularCosto(2.5, 1);
        float esperado = 0.345;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperado, actual);
    }

       TEST(testCalculadoraDeCosto, TestPesoMayorOIgualA_3_YMenorA_9_Articulo1)
    {
        /// AAA

        // Arrange - configurar el escenario
        CalculadoraDeCosto *caso2 = new CalculadoraDeCosto;

        // Act - ejecute la operación
        float actual = caso2->CalcularCosto(5, 1);
        float esperado = 0.650;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperado, actual);
    }

     TEST(testCalculadoraDeCosto, TestPesoMayorOIgualA_9_Articulo1)
    {
        /// AAA

        // Arrange - configurar el escenario
        CalculadoraDeCosto *caso3 = new CalculadoraDeCosto;

        // Act - ejecute la operación
        float actual = caso3->CalcularCosto(10, 1);
        float esperado = 0.800;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperado, actual);
    }

    TEST(testCalculadoraDeCosto, TestPesoMenorA_3_Articulo2)
    {
        /// AAA

        // Arrange - configurar el escenario
        CalculadoraDeCosto *caso4 = new CalculadoraDeCosto;

        // Act - ejecute la operación
        float actual = caso4->CalcularCosto(2.5, 2);
        float esperado = 0.600;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperado, actual);
    }

    TEST(testCalculadoraDeCosto, TestPesoMayorOIgualA_3_YMenorA_9_Articulo2)
    {
        /// AAA

        // Arrange - configurar el escenario
        CalculadoraDeCosto *caso5 = new CalculadoraDeCosto;

        // Act - ejecute la operación
        float actual = caso5->CalcularCosto(5, 2);
        float esperado = 0.450;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperado, actual);
    }

    TEST(testCalculadoraDeCosto, TestPesoMayorOIgualA_9_Articulo2)
    {
        /// AAA

        // Arrange - configurar el escenario
        CalculadoraDeCosto *caso6 = new CalculadoraDeCosto;

        // Act - ejecute la operación
        float actual = caso6->CalcularCosto(10, 2);
        float esperado = 0.345;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperado, actual);
    }

    TEST(testCalculadoraDeCosto, TestPesoMenorA_3_Articulo3)
    {
        /// AAA

        // Arrange - configurar el escenario
        CalculadoraDeCosto *caso7 = new CalculadoraDeCosto;

        // Act - ejecute la operación
        float actual = caso7->CalcularCosto(2.5, 3);
        float esperado = 0.250;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperado, actual);
    }

    TEST(testCalculadoraDeCosto, TestPesoMayorOIgualA_3_YMenorA_9_Articulo3)
    {
        /// AAA

        // Arrange - configurar el escenario
        CalculadoraDeCosto *caso8 = new CalculadoraDeCosto;

        // Act - ejecute la operación
        float actual = caso8->CalcularCosto(5, 3);
        float esperado = 0.250;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperado, actual);
    }
     
     TEST(testCalculadoraDeCosto, TestPesoMayorOIgualA_9_Articulo3)
    {
        /// AAA

        // Arrange - configurar el escenario
        CalculadoraDeCosto *caso9 = new CalculadoraDeCosto;

        // Act - ejecute la operación
        float actual = caso9->CalcularCosto(10, 3);
        float esperado = 0.250;

        // Assert - valide los resultados
        EXPECT_FLOAT_EQ(esperado, actual);
    }
}