from typing import Dict, Callable


# a registry of suspiciousness metrics
SuspiciousnessMetric = Callable[[int, int, int, int], float]
__metrics = {}


def metric(name: str) -> Callable[[SuspiciousnessMetric], SuspiciousnessMetric]:
    def f(m: SuspiciousnessMetric) -> SuspiciousnessMetric:
        """
        Registers a given suspiciousness metric.
        """
        global __metrics
        __metrics[name] = m
        return m
    return f


@metric('tarantula')
def tarantula(ep: int, np: int, ef: int, nf: int) -> float:
    frac_fail = ef / (ef + nf)
    frac_pass = ep / (ep + np)
    return frac_fail / (frac_pass + frac_fail)
