.. Review the README on instructions to contribute.
.. Review the style guide to keep a consistent approach to the documentation.
.. Static objects, such as figures, should be stored in the _static directory. Review the _static/README on instructions to contribute.
.. Do not remove the comments that describe each section. They are included to provide guidance to contributors.
.. Do not remove other content provided in the templates, such as a section. Instead, comment out the content and include comments to explain the situation. For example:
	- If a section within the template is not needed, comment out the section title and label reference. Do not delete the expected section title, reference or related comments provided from the template.
    - If a file cannot include a title (surrounded by ampersands (#)), comment out the title from the template and include a comment explaining why this is implemented (in addition to applying the ``title`` directive).

.. This is the label that can be used for cross referencing this file.
.. Recommended title label format is "Directory Name"-"Title Name" -- Spaces should be replaced by hyphens.
.. _Risk-Tool-User-Guide-Breakdown-Risk-Tool-Tables:
.. Each section should include a label for cross referencing to a given area.
.. Recommended format for all labels is "Title Name"-"Section Name" -- Spaces should be replaced by hyphens.
.. To reference a label that isn't associated with an reST object such as a title or figure, you must include the link and explicit title using the syntax :ref:`link text <label-name>`.
.. A warning will alert you of identical labels during the linkcheck process.

.. This file does not contain a title so it can match formatting in another location (project/contributing.rst).
.. title:: Risk Tool Tables
.. ################
.. Risk Tool Tables
.. ################

.. This section should provide a brief, top-level description of the page.

This section includes the tables from the Risk Tool.
Additional information specific to Rubin Observatory may be found here.

.. _Risk-Category-Table:
.. list-table:: Risk Category and Sub Category Table (defined by Risk Tool)
   :header-rows: 1

   * - Category --- Sub Category
     - Sub Category Description
   * - **Program Science** --- Astronomy and Astrophysics Community
     - Priorities, needs and expectations of the community and the changes related to it.
   * - **Program Science** --- Science Related
     - Science produced by the organization and its relevance and impact.
   * - **Technical** --- Scope
     - Related to Scope changes of the Organization/Project objectives.
   * - **Technical** --- Requirements
     - Identifying/missing/not well defined requirements.
   * - **Technical** --- Processes
     - Inadequate or not well defined technical or operational processes.
   * - **Technical** --- Technology
     - Technology readiness level and related.
   * - **Technical** --- Interfaces
     - Technical interfaces, infrastructure and complexity of the interfaces, and related.
   * - **Technical** --- Quality
     - Verification of the requirements and concept of operations, to ensure the performance.
       How well the as-built system compares against the requirements.
   * - **Management** --- Program/Project Management
     - Anything related to project and program like schedule, planning, Monitoring and controlling.
   * - **Management** --- NOIRLab/AURA Management
     - AURA, NOIRLab rates and other AURA and NOIRLab management related.
   * - **Management** --- Operations Management
     - Portfolio Management, finance, ITOps, safety group, and other operations related.
   * - **Management** --- Resourcing
     - Labor resourcing, shared resources availability, conflicts between fraction of shared resources.
   * - **Management** --- Communication
     - Internal communication within the organization and external communication.
   * - **Management** --- Health & Safety Environment
     - Mental health of the employees due to pandemic, safety in the observatories, etc.
   * - **Commercial/Organizational** --- Contractual/Procurement
     - All contractual and procurement related events, liabilities, warranties, legal, compliance.
   * - **Commercial/Organizational** --- Partnerships and Joint Ventures
     - Any risks associated with tenants, partners and in-kind support, relationship.
   * - **Commercial/Organizational** --- Subcontracts and Suppliers
     - Any risk related to subcontractor and supplier issues (non-contractual); e.g., supplier going bankrupt.
   * - **External** --- Financial
     - All sources of risks related to funding and cash flow.
   * - **External** --- Legislation and Regulatory
     - Lease renewals, political, sites & facilities, applicable law.
   * - **External** --- Exchange Rates
     - Exchange rates for currency, e.g., USD-CLP, USD-EUR.
   * - **External** --- Natural Environmental Factors
     - Risks related to weather, earthquakes, tsunami and other natural factors.
   * - **External** --- Human Environmental Factors
     - Risks related to light pollution, satellites, air pollution and other passive human factors.
   * - **External** --- External Stakeholders
     - External stakeholders influencing like funding agencies, public, protest group, hackers, hostile competitors or other active human factors.

.. _Likelihood-Table:
.. list-table:: Likelihood Category Table (defined by Risk Tool)
   :header-rows: 1

   * - Likelihood Category
     - Percent Chance
     - Definition
   * - Remote
     - 10-20%
     - Extremely unlikely to occur.
   * - Unlikely
     - 21-40%
     - May occur only in exceptional circumstances.
   * - Possible
     - 41-60%
     - Could occur in certain circumstances.
   * - Likely
     - 61-80%
     - Probably will occur in many circumstances.
   * - Very Likely
     - 81-90%
     - Expected to occur in most circumstances.

.. _Risk-Impact-Table:
.. list-table:: Risk Impact Category Table (defined by Risk Tool)
   :header-rows: 1
   :stub-columns: 1

   * - Impact Category
     - Overall Impact
     - Cost Impact
     - Schedule Impact
     - Performance Impact
     - Safety Impact
     - Safety Human Impact
     - Safety Asset Impact
   * - Low
     - Any other impacts with respect to operations, project, or initiative within the Programs or Services.
     - Minimal consequence.
     - Minimal consequence.
     - Minimal consequence to objectives/goals.
     - Asset has no sign of physical damage and/or personnel discomfort/nuisance.
     - Discomfort or nuisance.
     - No sign of physical damage.
   * - Moderate
     - Any impacts with respect to delivering an NOIRLab Program or Service POP milestone.
     - Cost variance less than or equal to 5% of total approved FY baseline.
     - Critical path does not slip; total slack of slipped tasks will not impact critical path in less than 10 days.
     - Minor consequence to objectives/goals.
     - Asset has cosmetic damage and is repairable and/or first aid event per OSHA criteria.
     - First aid event per OSHA criteria.
     - Cosmetic damage and is repairable.
   * - Significant
     - Any impacts with respect to Key Performance Evaluation metric(s) of an NOIRLab Program or Service.
     - Cost variance greater than 5% but less than or equal to 10% of total approved FY baseline.
     - Critical path does not slip; total slack of slipped tasks is within 10 days of impacting the critical path.
     - Unable to achieve a particular objective/goal, but remaining objective goals represent better than minimum success or outcome.
     - Asset damaged but repairable and/or no personnel lost time injury or illness per OSHA criteria.
     - No lost time injury or illness per OSHA criteria.
     - Damaged but repairable.
   * - Damaging/Major
     - Any impacts with respect to priorities in the POP or LRP of an NOIRLab Program or Service.
     - Cost variance greater than 10% but less than or equal to 15% of total approved FY baseline.
     - Critical path slips.
     - Unable to achieve multiple objectives/goals, but minimum success can still be achieved or claimed.
     - Asset is substantially damaged but repairable and/or personnel lost time injury or illness per OSHA criteria.
     - Lost time injury or illness per OSHA criteria.
     - Substantially damaged but repairable.
   * - Catastrophic/Extreme
     - Any impacts with respect to NOIRLab Center CA and Programs CSAs, and/or impacting the mission of NOIRLab or any constituent Programs or Services.
     - Cost variance greater than 15% of total approved FY baseline.
     - Critical path slips and one or more critical milestones or events cannot be met.
     - Unable to achieve objectives/goals such that minimum success cannot be achieved or claimed.
     - Asset is compromised and unrepairable: a total loss and/or personnel loss of life.
     - Loss of life.
     - Asset is compromised and unrepairable; a total loss.
