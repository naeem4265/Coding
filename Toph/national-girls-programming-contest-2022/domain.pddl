(define (domain couples)
    (:types person - object
        man - person
        woman - person
        location - object
        bank - location
    )
    (:predicates (at ?p - person ?l - location)
        (boat-at ?l - location)
        (couple ?h - man ?w - woman)
        (husband ?h - man)
        (wife ?w - woman)
    )
    (:action move-person
        :parameters (?p - person ?from - location ?to - location)
        :precondition (and (at ?p ?from)
        (boat-at ?from)
        (or (boat-at ?to)
        (and (not (woman ?p))
        (not (exists (?m - man)
        (at ?m ?to)
        (not (husband ?m)))))))
        :effect (and (not (at ?p ?from))
        (at ?p ?to))
    )
    (:action move-boat
        :parameters (?from - location ?to - location)
        :precondition (and (boat-at ?from)
        (not (= ?from ?to))
        (<= (count ?p - person
        (and (at ?p ?from)
        (not (woman ?p))))
        2)
        )
        :effect (and (not (boat-at ?from))
        (boat-at ?to))
    )
)