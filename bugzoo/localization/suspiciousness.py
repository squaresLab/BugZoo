from typing import Dict


# a registry of suspiciousness metrics
SuspiciousnessMetric = Callable[[int, int, int, int], [float]]
__metrics: Dict[str, SuspiciousnessMetric]  = {}


def metric(m: SuspiciousnessMetric) -> SuspiciousnessMetric:
    """
    Registers a given suspiciousness metric.
    """
    global __metrics
    __metrics[m.name] = m


@metric
def tarantula(ep: int, np: int, ef: int, nf: int) -> float:
    frac_fail = ef / (ef + nf)
    frac_pass = ep / (ep + np)
    return frac_fail / (frac_pass + frac_fail)
