import Foundation
import Math

func curve(x: Double, params: Optional<UnsafeMutableRawPointer>) -> Double {
    2 * sqrt (1 - pow (x, 2));
}

func arc_length(x: Double, params: Optional<UnsafeMutableRawPointer>) -> Double {
    let curveD = derivative(curve, x, 1e-6)
    return sqrt (pow (curveD, 2) + 1)
}

func surfaceArea(a: Double, b: Double) -> Double {
    2 * integral(arc_length, a, b, 1e-6)
}

let area = surfaceArea(a: -1, b: 1)
print("Area: \(area)")
